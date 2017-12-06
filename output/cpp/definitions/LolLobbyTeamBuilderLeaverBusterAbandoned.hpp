#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderLeaverBusterAbandoned_t {
    std::string abandonerName;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLeaverBusterAbandoned_t& v) {
    j["abandonerName"] = v.abandonerName;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLeaverBusterAbandoned_t& v) {
    v.abandonerName = j.at("abandonerName").get<std::string>();
  }
}
