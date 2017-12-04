#ifndef SWAGGER_TYPES_LolPerksChampSelectTradeContract_HPP
#define SWAGGER_TYPES_LolPerksChampSelectTradeContract_HPP
#include <json.hpp>
#include "LolPerksChampSelectTradeState.hpp"
namespace leagueapi {
  // 
  struct LolPerksChampSelectTradeContract {
    // 
    int64_t cellId;
    // 
    int64_t id;
    // 
    LolPerksChampSelectTradeState state;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectTradeContract& v) {
    j["cellId"] = v.cellId;
    j["id"] = v.id;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectTradeContract& v) {
    v.cellId = j.at("cellId").get<int64_t>;
    v.id = j.at("id").get<int64_t>;
    v.state = j.at("state").get<LolPerksChampSelectTradeState>;
  }

}
#endif // SWAGGER_TYPES_LolPerksChampSelectTradeContract_HPP
