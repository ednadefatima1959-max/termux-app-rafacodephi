package com.termux.lowlevel;

import android.util.Log;

/**
 * Example usage of low-level bare-metal optimization module
 * Demonstrates VA (Vectra Analysis) and ANOVA operations
 */
public class LowLevelExample {
    
    private static final String TAG = "LowLevelExample";
    
    /**
     * Example: Vector similarity analysis using VA pairing
     */
    public static void exampleVectorSimilarity() {
        Log.i(TAG, "=== Vector Similarity Example ===");
        
        // Define two vectors
        float[] vector1 = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
        float[] vector2 = {2.0f, 3.0f, 4.0f, 5.0f, 6.0f};
        
        // Compute cosine similarity (pairing metric)
        float cosineSim = VectraMath.computeCosineSimilarity(vector1, vector2);
        Log.i(TAG, "Cosine similarity: " + cosineSim);
        
        // Compute Euclidean distance (pairing metric)
        float euclideanDist = VectraMath.computeEuclideanDistance(vector1, vector2);
        Log.i(TAG, "Euclidean distance: " + euclideanDist);
        
        // VA pairing: pair(v_i, v_j) => { cos(v_i, v_j), ||v_i - v_j||, ΔH }
        Log.i(TAG, "VA Pairing: cos=" + cosineSim + ", dist=" + euclideanDist);
    }
    
    /**
     * Example: Test reversal invariance (VA invariance test)
     */
    public static void exampleReversalInvariance() {
        Log.i(TAG, "=== Reversal Invariance Example ===");
        
        // Symmetric vector (should be reversal invariant)
        float[] symmetricVector = {1.0f, 2.0f, 3.0f, 2.0f, 1.0f};
        boolean isInvariant = VectraMath.testReversalInvariance(symmetricVector, 0.1f);
        Log.i(TAG, "Symmetric vector reversal invariant: " + isInvariant);
        
        // Asymmetric vector (should not be reversal invariant)
        float[] asymmetricVector = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
        isInvariant = VectraMath.testReversalInvariance(asymmetricVector, 0.1f);
        Log.i(TAG, "Asymmetric vector reversal invariant: " + isInvariant);
        
        // I_← (v) = 1[pair(v, rev(v)) stable]
    }
    
    /**
     * Example: ANOVA least squares fitting
     * Demonstrates: ∂/∂β Σᵢ(yᵢ - ŷᵢ(β))² = 0
     */
    public static void exampleAnovaLeastSquares() {
        Log.i(TAG, "=== ANOVA Least Squares Example ===");
        
        // Linear relationship: y = 2x + 3
        float[] x = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f};
        float[] y = {5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f, 17.0f, 19.0f};
        
        // Fit least squares model
        AnovaResult result = VectraMath.fitLeastSquares(x, y);
        
        if (result != null) {
            Log.i(TAG, "Coefficients: intercept=" + result.coefficients[0] + 
                      ", slope=" + result.coefficients[1]);
            Log.i(TAG, "R-squared: " + result.getRSquared());
            Log.i(TAG, "SS_T: " + result.ssTotal);
            Log.i(TAG, "SS_M: " + result.ssModel);
            Log.i(TAG, "SS_E: " + result.ssError);
            
            // Verify: SS_T = SS_M + SS_E
            float sum = result.ssModel + result.ssError;
            Log.i(TAG, "SS_M + SS_E = " + sum + " (should equal SS_T)");
        }
    }
    
    /**
     * Example: Initialize VA context with specific configuration
     */
    public static void exampleVAContext() {
        Log.i(TAG, "=== VA Context Example ===");
        
        // Initialize VA with space dimension and feature type
        // VA_min = (Space ⊕ Features ⊕ Pairing ⊕ InvarianceTests ⊕ OutputSpec)
        long ctx = VectraMath.initVA(128, VectraMath.FEATURE_HASH);
        
        Log.i(TAG, "VA context initialized: " + ctx);
        Log.i(TAG, "Space dimension: 128");
        Log.i(TAG, "Feature type: HASH");
        
        // Perform operations with context...
        
        // Release context when done
        VectraMath.releaseVA(ctx);
        Log.i(TAG, "VA context released");
    }
    
    /**
     * Example: Optimized memory operations
     */
    public static void exampleMemoryOperations() {
        Log.i(TAG, "=== Memory Operations Example ===");
        
        // Optimized memory copy
        byte[] source = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        byte[] destination = new byte[10];
        
        long startTime = System.nanoTime();
        LowLevelUtils.memcpyOptimized(destination, source, 10);
        long endTime = System.nanoTime();
        
        Log.i(TAG, "Optimized memcpy took: " + (endTime - startTime) + " ns");
        
        // Optimized memory set
        byte[] buffer = new byte[1024];
        startTime = System.nanoTime();
        LowLevelUtils.memsetOptimized(buffer, 0, 1024);
        endTime = System.nanoTime();
        
        Log.i(TAG, "Optimized memset took: " + (endTime - startTime) + " ns");
    }
    
    /**
     * Example: Fast mathematical operations
     */
    public static void exampleFastMath() {
        Log.i(TAG, "=== Fast Math Example ===");
        
        // Fast square root
        float x = 100.0f;
        float sqrt = LowLevelUtils.sqrtFast(x);
        Log.i(TAG, "sqrt(" + x + ") = " + sqrt);
        
        // Fast power
        float base = 2.0f;
        int exp = 10;
        float pow = LowLevelUtils.powFast(base, exp);
        Log.i(TAG, base + "^" + exp + " = " + pow);
        
        // Vector operations
        float[] v1 = {3.0f, 4.0f, 0.0f};
        float[] v2 = {1.0f, 0.0f, 0.0f};
        
        float dot = LowLevelUtils.dotProduct(v1, v2);
        Log.i(TAG, "Dot product: " + dot);
        
        float mag = LowLevelUtils.magnitude(v1);
        Log.i(TAG, "Magnitude of v1: " + mag);
        
        LowLevelUtils.normalize(v1);
        Log.i(TAG, "Normalized v1: [" + v1[0] + ", " + v1[1] + ", " + v1[2] + "]");
    }
    
    /**
     * Run all examples
     */
    public static void runAllExamples() {
        try {
            exampleVectorSimilarity();
            exampleReversalInvariance();
            exampleAnovaLeastSquares();
            exampleVAContext();
            exampleMemoryOperations();
            exampleFastMath();
            
            Log.i(TAG, "=== All examples completed successfully ===");
        } catch (Exception e) {
            Log.e(TAG, "Error running examples: " + e.getMessage(), e);
        }
    }
}
