#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectAction_t {
    int64_t actorCellId;
    int32_t championId;
    bool completed;
    int64_t id;
    int32_t pickTurn;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectAction_t& v) {
    j["actorCellId"] = v.actorCellId;
    j["championId"] = v.championId;
    j["completed"] = v.completed;
    j["id"] = v.id;
    j["pickTurn"] = v.pickTurn;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectAction_t& v) {
    v.actorCellId = j.at("actorCellId").get<int64_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.completed = j.at("completed").get<bool>();
    v.id = j.at("id").get<int64_t>();
    v.pickTurn = j.at("pickTurn").get<int32_t>();
    v.type = j.at("type").get<std::string>();
  }
}
