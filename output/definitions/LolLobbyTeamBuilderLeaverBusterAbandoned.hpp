#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderLeaverBusterAbandoned_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderLeaverBusterAbandoned_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderLeaverBusterAbandoned {
    // 
    std::string abandonerName;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLeaverBusterAbandoned& v) {
    j["abandonerName"] = v.abandonerName;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLeaverBusterAbandoned& v) {
    v.abandonerName = j.at("abandonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderLeaverBusterAbandoned_HPP
