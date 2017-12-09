#pragma once
#include <json.hpp>
#include <optional>
#include "ClientBracketMatchStatus.hpp"
namespace leagueapi {
  struct BracketMatch_t {
    int64_t gameId;
    ClientBracketMatchStatus_t status;
    int64_t rosterId2;
    int64_t gameStartTime;
    bool loserBracket;
    int32_t order;
    int32_t round;
    int64_t rosterId1;
    int64_t id;
    int64_t winnerId;
    int64_t roundStartTime;
  };

  inline void to_json(nlohmann::json& j, const BracketMatch_t& v) {
    j["gameId"] = v.gameId;
    j["status"] = v.status;
    j["rosterId2"] = v.rosterId2;
    j["gameStartTime"] = v.gameStartTime;
    j["loserBracket"] = v.loserBracket;
    j["order"] = v.order;
    j["round"] = v.round;
    j["rosterId1"] = v.rosterId1;
    j["id"] = v.id;
    j["winnerId"] = v.winnerId;
    j["roundStartTime"] = v.roundStartTime;
  }

  inline void from_json(const nlohmann::json& j, BracketMatch_t& v) {
    v.gameId = j.at("gameId").get<int64_t>();
    v.status = j.at("status").get<ClientBracketMatchStatus_t>();
    v.rosterId2 = j.at("rosterId2").get<int64_t>();
    v.gameStartTime = j.at("gameStartTime").get<int64_t>();
    v.loserBracket = j.at("loserBracket").get<bool>();
    v.order = j.at("order").get<int32_t>();
    v.round = j.at("round").get<int32_t>();
    v.rosterId1 = j.at("rosterId1").get<int64_t>();
    v.id = j.at("id").get<int64_t>();
    v.winnerId = j.at("winnerId").get<int64_t>();
    v.roundStartTime = j.at("roundStartTime").get<int64_t>();
  }
  inline std::string to_string(const BracketMatch_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
