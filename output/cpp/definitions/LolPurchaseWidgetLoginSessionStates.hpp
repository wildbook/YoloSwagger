#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolPurchaseWidgetLoginSessionStates_t {
    ERROR_E = 3,
    IN_PROGRESS_E = 0,
    LOGGING_OUT_E = 2,
    SUCCEEDED_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetLoginSessionStates_t& v) {
    switch(v) {
      case LolPurchaseWidgetLoginSessionStates_t::ERROR_E:
        j = "ERROR";
      break;
      case LolPurchaseWidgetLoginSessionStates_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case LolPurchaseWidgetLoginSessionStates_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LolPurchaseWidgetLoginSessionStates_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetLoginSessionStates_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "ERROR"){
      v = LolPurchaseWidgetLoginSessionStates_t::ERROR_E;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolPurchaseWidgetLoginSessionStates_t::IN_PROGRESS_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolPurchaseWidgetLoginSessionStates_t::LOGGING_OUT_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolPurchaseWidgetLoginSessionStates_t::SUCCEEDED_E;
      return;
    }
  }
}
