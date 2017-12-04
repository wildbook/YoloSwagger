#ifndef SWAGGER_TYPES_LolChampSelectChampSelectTradeContract_HPP
#define SWAGGER_TYPES_LolChampSelectChampSelectTradeContract_HPP
#include <json.hpp>
#include "LolChampSelectChampSelectTradeState.hpp"
namespace leagueapi {
  // 
  struct LolChampSelectChampSelectTradeContract {
    // 
    int64_t cellId;
    // 
    int64_t id;
    // 
    LolChampSelectChampSelectTradeState state;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectTradeContract& v) {
    j["cellId"] = v.cellId;
    j["id"] = v.id;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectTradeContract& v) {
    v.cellId = j.at("cellId").get<int64_t>;
    v.id = j.at("id").get<int64_t>;
    v.state = j.at("state").get<LolChampSelectChampSelectTradeState>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectChampSelectTradeContract_HPP
