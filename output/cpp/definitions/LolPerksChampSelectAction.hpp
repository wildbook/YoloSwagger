#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksChampSelectAction_t {
    bool completed;
    int32_t championId;
    int64_t actorCellId;
    std::string type;
    int64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectAction_t& v) {
    j["completed"] = v.completed;
    j["championId"] = v.championId;
    j["actorCellId"] = v.actorCellId;
    j["type"] = v.type;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectAction_t& v) {
    v.completed = j.at("completed").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
    v.actorCellId = j.at("actorCellId").get<int64_t>();
    v.type = j.at("type").get<std::string>();
    v.id = j.at("id").get<int64_t>();
  }
  inline std::string to_string(const LolPerksChampSelectAction_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
