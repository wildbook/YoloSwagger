#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectBannableChampions_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectBannableChampions_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderChampSelectBannableChampions {
    // 
    std::vector<int32_t> championIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectBannableChampions& v) {
    j["championIds"] = v.championIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectBannableChampions& v) {
    v.championIds = j.at("championIds").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectBannableChampions_HPP
