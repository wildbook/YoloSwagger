#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectAction_t {
    bool completed;
    int64_t actorCellId;
    std::string type;
    int64_t id;
    int32_t pickTurn;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectAction_t& v) {
    j["completed"] = v.completed;
    j["actorCellId"] = v.actorCellId;
    j["type"] = v.type;
    j["id"] = v.id;
    j["pickTurn"] = v.pickTurn;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectAction_t& v) {
    v.completed = j.at("completed").get<bool>();
    v.actorCellId = j.at("actorCellId").get<int64_t>();
    v.type = j.at("type").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.pickTurn = j.at("pickTurn").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyChampSelectAction_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
