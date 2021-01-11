/**
 * @file
 * Defines default strategy parameter values for the given timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_HeikenAshi_Params_M30 : Indi_HeikenAshi_Params {
  Indi_HeikenAshi_Params_M30() : Indi_HeikenAshi_Params(indi_ha_defaults, PERIOD_M30) {
    applied_price = (ENUM_APPLIED_PRICE)0;
    ma_method = 0;
    period = 0;
    shift = 0;
  }
} indi_ha_m30;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_HeikenAshi_Params_M30 : StgParams {
  // Struct constructor.
  Stg_HeikenAshi_Params_M30() : StgParams(stg_ha_defaults) {
    lot_size = 0;
    signal_open_method = 0;
    signal_open_filter = 10;
    signal_open_level = (float)0.0;
    signal_open_boost = 1;
    signal_close_method = 0;
    signal_close_level = (float)0.0;
    price_stop_method = 0;
    price_stop_level = (float)0.0;
    tick_filter_method = 1;
    max_spread = 0;
  }
} stg_ha_m30;
