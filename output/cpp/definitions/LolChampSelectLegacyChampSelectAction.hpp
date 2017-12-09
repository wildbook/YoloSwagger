#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectAction_t {
    int32_t pickTurn;
    int64_t actorCellId;
    bool completed;
    int64_t id;
    std::string type;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectAction_t& v) {
    j["pickTurn"] = v.pickTurn;
    j["actorCellId"] = v.actorCellId;
    j["completed"] = v.completed;
    j["id"] = v.id;
    j["type"] = v.type;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectAction_t& v) {
    v.pickTurn = j.at("pickTurn").get<int32_t>();
    v.actorCellId = j.at("actorCellId").get<int64_t>();
    v.completed = j.at("completed").get<bool>();
    v.id = j.at("id").get<int64_t>();
    v.type = j.at("type").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyChampSelectAction_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
