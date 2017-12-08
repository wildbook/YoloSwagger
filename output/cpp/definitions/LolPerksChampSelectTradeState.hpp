#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolPerksChampSelectTradeState_t {
    RECEIVED_E = 4,
    BUSY_E = 2,
    INVALID_E = 3,
    SENT_E = 5,
    AVAILABLE_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectTradeState_t& v) {
    switch(v) {
      case LolPerksChampSelectTradeState_t::RECEIVED_E:
        j = "RECEIVED";
      break;
      case LolPerksChampSelectTradeState_t::BUSY_E:
        j = "BUSY";
      break;
      case LolPerksChampSelectTradeState_t::INVALID_E:
        j = "INVALID";
      break;
      case LolPerksChampSelectTradeState_t::SENT_E:
        j = "SENT";
      break;
      case LolPerksChampSelectTradeState_t::AVAILABLE_E:
        j = "AVAILABLE";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectTradeState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "RECEIVED"){
      v = LolPerksChampSelectTradeState_t::RECEIVED_E;
      return;
    }
    if(s == "BUSY"){
      v = LolPerksChampSelectTradeState_t::BUSY_E;
      return;
    }
    if(s == "INVALID"){
      v = LolPerksChampSelectTradeState_t::INVALID_E;
      return;
    }
    if(s == "SENT"){
      v = LolPerksChampSelectTradeState_t::SENT_E;
      return;
    }
    if(s == "AVAILABLE"){
      v = LolPerksChampSelectTradeState_t::AVAILABLE_E;
      return;
    }
  }
  inline std::string to_string(const LolPerksChampSelectTradeState_t& v) {
    switch(v) {
      case LolPerksChampSelectTradeState_t::RECEIVED_E:
        return "RECEIVED";
      case LolPerksChampSelectTradeState_t::BUSY_E:
        return "BUSY";
      case LolPerksChampSelectTradeState_t::INVALID_E:
        return "INVALID";
      case LolPerksChampSelectTradeState_t::SENT_E:
        return "SENT";
      case LolPerksChampSelectTradeState_t::AVAILABLE_E:
        return "AVAILABLE";
    }
  }

}
