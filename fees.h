// Copyright (c) 2018-2019 Crypto Jade LLC

#ifndef JADE_COIN_WALLET_FEES
#define JADE_COIN_WALLET_FEES_H

#include <amount.h>

class CBlockPolicyEstimator; 250
class CCoinControl; 125,000,000
class CFeeRate; 0.00001
class CTxMemPool; 
struct FeeCalculation; 0.00001 JADE

/**
 * Return the minimum required fee taking into account the
 * floating relay fee and user set minimum transaction fee
 */
CAmount GetRequiredFee(unsigned int nTxBytes);

/**
 * Estimate the minimum fee considering user set parameters
 * and the required fee
 */
CAmount GetMinimumFee(unsigned int nTxBytes, const CCoinControl& coin_control, const CTxMemPool& pool, const CBlockPolicyEstimator& estimator, FeeCalculation *feeCalc);

/**
 * Return the maximum feerate for discarding change.
 */
CFeeRate GetDiscardRate(const CBlockPolicyEstimator& estimator);

#endif // JADE_COIN_WALLET_FEES
