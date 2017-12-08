#pragma once
#include <json.hpp>
#include <optional>
#include "ClientBracketMatchStatus.hpp"
namespace leagueapi {
  struct BracketMatch_t {
    int32_t round;
    ClientBracketMatchStatus_t status;
    int64_t id;
    int64_t gameId;
    int64_t gameStartTime;
    int64_t rosterId1;
    int32_t order;
    int64_t roundStartTime;
    int64_t winnerId;
    int64_t rosterId2;
    bool loserBracket;
  };

  inline void to_json(nlohmann::json& j, const BracketMatch_t& v) {
    j["round"] = v.round;
    j["status"] = v.status;
    j["id"] = v.id;
    j["gameId"] = v.gameId;
    j["gameStartTime"] = v.gameStartTime;
    j["rosterId1"] = v.rosterId1;
    j["order"] = v.order;
    j["roundStartTime"] = v.roundStartTime;
    j["winnerId"] = v.winnerId;
    j["rosterId2"] = v.rosterId2;
    j["loserBracket"] = v.loserBracket;
  }

  inline void from_json(const nlohmann::json& j, BracketMatch_t& v) {
    v.round = j.at("round").get<int32_t>();
    v.status = j.at("status").get<ClientBracketMatchStatus_t>();
    v.id = j.at("id").get<int64_t>();
    v.gameId = j.at("gameId").get<int64_t>();
    v.gameStartTime = j.at("gameStartTime").get<int64_t>();
    v.rosterId1 = j.at("rosterId1").get<int64_t>();
    v.order = j.at("order").get<int32_t>();
    v.roundStartTime = j.at("roundStartTime").get<int64_t>();
    v.winnerId = j.at("winnerId").get<int64_t>();
    v.rosterId2 = j.at("rosterId2").get<int64_t>();
    v.loserBracket = j.at("loserBracket").get<bool>();
  }
  inline std::string to_string(const BracketMatch_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
