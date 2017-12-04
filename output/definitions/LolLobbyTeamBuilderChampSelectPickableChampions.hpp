#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectPickableChampions_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectPickableChampions_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderChampSelectPickableChampions {
    // 
    std::vector<int32_t> championIds;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectPickableChampions& v) {
    j["championIds"] = v.championIds;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectPickableChampions& v) {
    v.championIds = j.at("championIds").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectPickableChampions_HPP
