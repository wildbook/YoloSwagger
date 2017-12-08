#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectAction_t {
    bool completed;
    std::string type;
    int32_t championId;
    int64_t actorCellId;
    int64_t id;
    int32_t pickTurn;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectAction_t& v) {
    j["completed"] = v.completed;
    j["type"] = v.type;
    j["championId"] = v.championId;
    j["actorCellId"] = v.actorCellId;
    j["id"] = v.id;
    j["pickTurn"] = v.pickTurn;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectAction_t& v) {
    v.completed = j.at("completed").get<bool>();
    v.type = j.at("type").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
    v.actorCellId = j.at("actorCellId").get<int64_t>();
    v.id = j.at("id").get<int64_t>();
    v.pickTurn = j.at("pickTurn").get<int32_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyChampSelectAction_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
