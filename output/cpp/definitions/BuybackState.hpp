#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class BuybackState_t {
    FORCED_NOT_READY_E = 1,
    NOT_READY_E = 0,
    READY_E = 2,
  };

  inline void to_json(nlohmann::json& j, const BuybackState_t& v) {
    switch(v) {
      case BuybackState_t::FORCED_NOT_READY_E:
        j = "FORCED_NOT_READY";
      break;
      case BuybackState_t::NOT_READY_E:
        j = "NOT_READY";
      break;
      case BuybackState_t::READY_E:
        j = "READY";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, BuybackState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "FORCED_NOT_READY"){
      v = BuybackState_t::FORCED_NOT_READY_E;
      return;
    }
    if(s == "NOT_READY"){
      v = BuybackState_t::NOT_READY_E;
      return;
    }
    if(s == "READY"){
      v = BuybackState_t::READY_E;
      return;
    }
  }
  inline std::string to_string(const BuybackState_t& v) {
    switch(v) {
      case BuybackState_t::FORCED_NOT_READY_E:
        return "FORCED_NOT_READY";
      case BuybackState_t::NOT_READY_E:
        return "NOT_READY";
      case BuybackState_t::READY_E:
        return "READY";
    }
  }

}
