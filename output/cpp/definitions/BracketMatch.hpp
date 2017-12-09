#pragma once
#include <json.hpp>
#include <optional>
#include "ClientBracketMatchStatus.hpp"
namespace leagueapi {
  struct BracketMatch_t {
    bool loserBracket;
    int64_t rosterId1;
    int64_t roundStartTime;
    int64_t rosterId2;
    int64_t gameId;
    int64_t id;
    int64_t gameStartTime;
    int32_t order;
    ClientBracketMatchStatus_t status;
    int32_t round;
    int64_t winnerId;
  };

  inline void to_json(nlohmann::json& j, const BracketMatch_t& v) {
    j["loserBracket"] = v.loserBracket;
    j["rosterId1"] = v.rosterId1;
    j["roundStartTime"] = v.roundStartTime;
    j["rosterId2"] = v.rosterId2;
    j["gameId"] = v.gameId;
    j["id"] = v.id;
    j["gameStartTime"] = v.gameStartTime;
    j["order"] = v.order;
    j["status"] = v.status;
    j["round"] = v.round;
    j["winnerId"] = v.winnerId;
  }

  inline void from_json(const nlohmann::json& j, BracketMatch_t& v) {
    v.loserBracket = j.at("loserBracket").get<bool>();
    v.rosterId1 = j.at("rosterId1").get<int64_t>();
    v.roundStartTime = j.at("roundStartTime").get<int64_t>();
    v.rosterId2 = j.at("rosterId2").get<int64_t>();
    v.gameId = j.at("gameId").get<int64_t>();
    v.id = j.at("id").get<int64_t>();
    v.gameStartTime = j.at("gameStartTime").get<int64_t>();
    v.order = j.at("order").get<int32_t>();
    v.status = j.at("status").get<ClientBracketMatchStatus_t>();
    v.round = j.at("round").get<int32_t>();
    v.winnerId = j.at("winnerId").get<int64_t>();
  }
  inline std::string to_string(const BracketMatch_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
