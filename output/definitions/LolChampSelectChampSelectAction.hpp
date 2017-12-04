#ifndef SWAGGER_TYPES_LolChampSelectChampSelectAction_HPP
#define SWAGGER_TYPES_LolChampSelectChampSelectAction_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectChampSelectAction {
    // 
    int64_t actorCellId;
    // 
    int32_t championId;
    // 
    bool completed;
    // 
    int64_t id;
    // 
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectAction& v) {
    j["actorCellId"] = v.actorCellId;
    j["championId"] = v.championId;
    j["completed"] = v.completed;
    j["id"] = v.id;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectAction& v) {
    v.actorCellId = j.at("actorCellId").get<int64_t>;
    v.championId = j.at("championId").get<int32_t>;
    v.completed = j.at("completed").get<bool>;
    v.id = j.at("id").get<int64_t>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectChampSelectAction_HPP
