#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksChampSelectAction_t {
    bool completed;
    int64_t id;
    std::string type;
    int64_t actorCellId;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectAction_t& v) {
    j["completed"] = v.completed;
    j["id"] = v.id;
    j["type"] = v.type;
    j["actorCellId"] = v.actorCellId;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectAction_t& v) {
    v.completed = j.at("completed").get<bool>();
    v.id = j.at("id").get<int64_t>();
    v.type = j.at("type").get<std::string>();
    v.actorCellId = j.at("actorCellId").get<int64_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolPerksChampSelectAction_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
