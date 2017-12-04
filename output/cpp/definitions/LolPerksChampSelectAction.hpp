#ifndef SWAGGER_TYPES_LolPerksChampSelectAction_HPP
#define SWAGGER_TYPES_LolPerksChampSelectAction_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksChampSelectAction {
    // 
    std::string type;
    // 
    bool completed;
    // 
    int32_t championId;
    // 
    int64_t id;
    // 
    int64_t actorCellId;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectAction& v) {
    j["type"] = v.type;
    j["completed"] = v.completed;
    j["championId"] = v.championId;
    j["id"] = v.id;
    j["actorCellId"] = v.actorCellId;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectAction& v) {
    v.type = j.at("type").get<std::string>;
    v.completed = j.at("completed").get<bool>;
    v.championId = j.at("championId").get<int32_t>;
    v.id = j.at("id").get<int64_t>;
    v.actorCellId = j.at("actorCellId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolPerksChampSelectAction_HPP
