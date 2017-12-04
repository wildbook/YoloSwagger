#ifndef SWAGGER_TYPES_LolChampSelectLegacyChampSelectAction_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyChampSelectAction_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectLegacyChampSelectAction {
    // 
    int64_t actorCellId;
    // 
    int32_t championId;
    // 
    bool completed;
    // 
    int64_t id;
    // 
    int32_t pickTurn;
    // 
    std::string type;
  };

  void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectAction& v) {
    j["actorCellId"] = v.actorCellId;
    j["championId"] = v.championId;
    j["completed"] = v.completed;
    j["id"] = v.id;
    j["pickTurn"] = v.pickTurn;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectAction& v) {
    v.actorCellId = j.at("actorCellId").get<int64_t>;
    v.championId = j.at("championId").get<int32_t>;
    v.completed = j.at("completed").get<bool>;
    v.id = j.at("id").get<int64_t>;
    v.pickTurn = j.at("pickTurn").get<int32_t>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyChampSelectAction_HPP
