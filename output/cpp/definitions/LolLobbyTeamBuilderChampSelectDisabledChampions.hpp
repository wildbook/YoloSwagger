#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectDisabledChampions_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectDisabledChampions_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderChampSelectDisabledChampions {
    // 
    std::vector<int32_t> championIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectDisabledChampions& v) {
    j["championIds"] = v.championIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectDisabledChampions& v) {
    v.championIds = j.at("championIds").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectDisabledChampions_HPP