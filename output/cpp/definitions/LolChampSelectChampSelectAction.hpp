#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectChampSelectAction_t {
    std::string type;
    int64_t id;
    bool completed;
    int64_t actorCellId;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectAction_t& v) {
    j["type"] = v.type;
    j["id"] = v.id;
    j["completed"] = v.completed;
    j["actorCellId"] = v.actorCellId;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectAction_t& v) {
    v.type = j.at("type").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.completed = j.at("completed").get<bool>();
    v.actorCellId = j.at("actorCellId").get<int64_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolChampSelectChampSelectAction_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
