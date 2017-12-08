#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyPartyMemberMetadataDto_t {
    std::vector<std::string> positionPref;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPartyMemberMetadataDto_t& v) {
    j["positionPref"] = v.positionPref;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPartyMemberMetadataDto_t& v) {
    v.positionPref = j.at("positionPref").get<std::vector<std::string>>();
  }
  inline std::string to_string(const LolLobbyPartyMemberMetadataDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
