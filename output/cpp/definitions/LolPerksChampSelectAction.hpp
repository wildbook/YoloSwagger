#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksChampSelectAction_t {
    std::string_t type;
    bool_t completed;
    int32_t_t championId;
    int64_t_t id;
    int64_t_t actorCellId;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectAction_t& v) {
    j["type"] = v.type;
    j["completed"] = v.completed;
    j["championId"] = v.championId;
    j["id"] = v.id;
    j["actorCellId"] = v.actorCellId;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectAction_t& v) {
    v.type = j.at("type").get<std::string_t>();
    v.completed = j.at("completed").get<bool_t>();
    v.championId = j.at("championId").get<int32_t_t>();
    v.id = j.at("id").get<int64_t_t>();
    v.actorCellId = j.at("actorCellId").get<int64_t_t>();
  }
  inline std::string to_string(const LolPerksChampSelectAction_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
