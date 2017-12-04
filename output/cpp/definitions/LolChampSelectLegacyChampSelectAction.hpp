#ifndef SWAGGER_TYPES_LolChampSelectLegacyChampSelectAction_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyChampSelectAction_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectLegacyChampSelectAction {
    // 
    int32_t championId;
    // 
    int32_t pickTurn;
    // 
    int64_t id;
    // 
    int64_t actorCellId;
    // 
    std::string type;
    // 
    bool completed;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectAction& v) {
    j["championId"] = v.championId;
    j["pickTurn"] = v.pickTurn;
    j["id"] = v.id;
    j["actorCellId"] = v.actorCellId;
    j["type"] = v.type;
    j["completed"] = v.completed;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectAction& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.pickTurn = j.at("pickTurn").get<int32_t>;
    v.id = j.at("id").get<int64_t>;
    v.actorCellId = j.at("actorCellId").get<int64_t>;
    v.type = j.at("type").get<std::string>;
    v.completed = j.at("completed").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyChampSelectAction_HPP
