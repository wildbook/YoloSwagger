#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectAction_t {
    int32_t championId;
    std::string type;
    int64_t id;
    bool completed;
    int64_t actorCellId;
    int32_t pickTurn;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectAction_t& v) {
    j["championId"] = v.championId;
    j["type"] = v.type;
    j["id"] = v.id;
    j["completed"] = v.completed;
    j["actorCellId"] = v.actorCellId;
    j["pickTurn"] = v.pickTurn;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectAction_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.type = j.at("type").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.completed = j.at("completed").get<bool>();
    v.actorCellId = j.at("actorCellId").get<int64_t>();
    v.pickTurn = j.at("pickTurn").get<int32_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyChampSelectAction_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
