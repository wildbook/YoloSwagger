#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectAction_t {
    int32_t championId;
    int32_t pickTurn;
    int64_t id;
    std::string type;
    bool completed;
    int64_t actorCellId;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectAction_t& v) {
    j["championId"] = v.championId;
    j["pickTurn"] = v.pickTurn;
    j["id"] = v.id;
    j["type"] = v.type;
    j["completed"] = v.completed;
    j["actorCellId"] = v.actorCellId;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectAction_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.pickTurn = j.at("pickTurn").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.type = j.at("type").get<std::string>();
    v.completed = j.at("completed").get<bool>();
    v.actorCellId = j.at("actorCellId").get<int64_t>();
  }
}
