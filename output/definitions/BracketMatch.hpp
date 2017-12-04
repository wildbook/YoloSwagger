#ifndef SWAGGER_TYPES_BracketMatch_HPP
#define SWAGGER_TYPES_BracketMatch_HPP
#include <json.hpp>
#include "ClientBracketMatchStatus.hpp"
namespace leagueapi {
  // 
  struct BracketMatch {
    // 
    int64_t gameId;
    // 
    int64_t gameStartTime;
    // 
    int64_t id;
    // 
    bool loserBracket;
    // 
    int32_t order;
    // 
    int64_t rosterId1;
    // 
    int64_t rosterId2;
    // 
    int32_t round;
    // 
    int64_t roundStartTime;
    // 
    ClientBracketMatchStatus status;
    // 
    int64_t winnerId;
  };

  void to_json(nlohmann::json& j, const BracketMatch& v) {
    j["gameId"] = v.gameId;
    j["gameStartTime"] = v.gameStartTime;
    j["id"] = v.id;
    j["loserBracket"] = v.loserBracket;
    j["order"] = v.order;
    j["rosterId1"] = v.rosterId1;
    j["rosterId2"] = v.rosterId2;
    j["round"] = v.round;
    j["roundStartTime"] = v.roundStartTime;
    j["status"] = v.status;
    j["winnerId"] = v.winnerId;
  }

  void from_json(const nlohmann::json& j, BracketMatch& v) {
    v.gameId = j.at("gameId").get<int64_t>;
    v.gameStartTime = j.at("gameStartTime").get<int64_t>;
    v.id = j.at("id").get<int64_t>;
    v.loserBracket = j.at("loserBracket").get<bool>;
    v.order = j.at("order").get<int32_t>;
    v.rosterId1 = j.at("rosterId1").get<int64_t>;
    v.rosterId2 = j.at("rosterId2").get<int64_t>;
    v.round = j.at("round").get<int32_t>;
    v.roundStartTime = j.at("roundStartTime").get<int64_t>;
    v.status = j.at("status").get<ClientBracketMatchStatus>;
    v.winnerId = j.at("winnerId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_BracketMatch_HPP
