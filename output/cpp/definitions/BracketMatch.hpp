#ifndef SWAGGER_TYPES_BracketMatch_HPP
#define SWAGGER_TYPES_BracketMatch_HPP
#include <json.hpp>
#include "ClientBracketMatchStatus.hpp"
namespace leagueapi {
  // 
  struct BracketMatch {
    // 
    ClientBracketMatchStatus status;
    // 
    bool loserBracket;
    // 
    int64_t gameId;
    // 
    int64_t gameStartTime;
    // 
    int64_t winnerId;
    // 
    int64_t roundStartTime;
    // 
    int32_t order;
    // 
    int64_t rosterId2;
    // 
    int64_t rosterId1;
    // 
    int64_t id;
    // 
    int32_t round;
  };

  inline void to_json(nlohmann::json& j, const BracketMatch& v) {
    j["status"] = v.status;
    j["loserBracket"] = v.loserBracket;
    j["gameId"] = v.gameId;
    j["gameStartTime"] = v.gameStartTime;
    j["winnerId"] = v.winnerId;
    j["roundStartTime"] = v.roundStartTime;
    j["order"] = v.order;
    j["rosterId2"] = v.rosterId2;
    j["rosterId1"] = v.rosterId1;
    j["id"] = v.id;
    j["round"] = v.round;
  }

  inline void from_json(const nlohmann::json& j, BracketMatch& v) {
    v.status = j.at("status").get<ClientBracketMatchStatus>;
    v.loserBracket = j.at("loserBracket").get<bool>;
    v.gameId = j.at("gameId").get<int64_t>;
    v.gameStartTime = j.at("gameStartTime").get<int64_t>;
    v.winnerId = j.at("winnerId").get<int64_t>;
    v.roundStartTime = j.at("roundStartTime").get<int64_t>;
    v.order = j.at("order").get<int32_t>;
    v.rosterId2 = j.at("rosterId2").get<int64_t>;
    v.rosterId1 = j.at("rosterId1").get<int64_t>;
    v.id = j.at("id").get<int64_t>;
    v.round = j.at("round").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_BracketMatch_HPP