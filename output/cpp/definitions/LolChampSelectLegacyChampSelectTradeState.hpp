#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolChampSelectLegacyChampSelectTradeState_t {
    SENT_E = 5,
    RECEIVED_E = 4,
    AVAILABLE_E = 1,
    BUSY_E = 2,
    INVALID_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectTradeState_t& v) {
    switch(v) {
      case LolChampSelectLegacyChampSelectTradeState_t::SENT_E:
        j = "SENT";
      break;
      case LolChampSelectLegacyChampSelectTradeState_t::RECEIVED_E:
        j = "RECEIVED";
      break;
      case LolChampSelectLegacyChampSelectTradeState_t::AVAILABLE_E:
        j = "AVAILABLE";
      break;
      case LolChampSelectLegacyChampSelectTradeState_t::BUSY_E:
        j = "BUSY";
      break;
      case LolChampSelectLegacyChampSelectTradeState_t::INVALID_E:
        j = "INVALID";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectTradeState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "SENT"){
      v = LolChampSelectLegacyChampSelectTradeState_t::SENT_E;
      return;
    }
    if(s == "RECEIVED"){
      v = LolChampSelectLegacyChampSelectTradeState_t::RECEIVED_E;
      return;
    }
    if(s == "AVAILABLE"){
      v = LolChampSelectLegacyChampSelectTradeState_t::AVAILABLE_E;
      return;
    }
    if(s == "BUSY"){
      v = LolChampSelectLegacyChampSelectTradeState_t::BUSY_E;
      return;
    }
    if(s == "INVALID"){
      v = LolChampSelectLegacyChampSelectTradeState_t::INVALID_E;
      return;
    }
  }
}
