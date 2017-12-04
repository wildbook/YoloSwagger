#ifndef SWAGGER_TYPES_LolChampSelectLegacyChampSelectTradeContract_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyChampSelectTradeContract_HPP
#include <json.hpp>
#include "LolChampSelectLegacyChampSelectTradeState.hpp"
namespace leagueapi {
  // 
  struct LolChampSelectLegacyChampSelectTradeContract {
    // 
    int64_t cellId;
    // 
    int64_t id;
    // 
    LolChampSelectLegacyChampSelectTradeState state;
  };

  void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectTradeContract& v) {
    j["cellId"] = v.cellId;
    j["id"] = v.id;
    j["state"] = v.state;
  }

  void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectTradeContract& v) {
    v.cellId = j.at("cellId").get<int64_t>;
    v.id = j.at("id").get<int64_t>;
    v.state = j.at("state").get<LolChampSelectLegacyChampSelectTradeState>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyChampSelectTradeContract_HPP
