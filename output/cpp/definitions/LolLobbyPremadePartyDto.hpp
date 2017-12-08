#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPremadeMemberDto.hpp"
namespace leagueapi {
  struct LolLobbyPremadePartyDto_t {
    std::vector<LolLobbyPremadeMemberDto_t> players;
    std::string_t partyId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPremadePartyDto_t& v) {
    j["players"] = v.players;
    j["partyId"] = v.partyId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPremadePartyDto_t& v) {
    v.players = j.at("players").get<std::vector<LolLobbyPremadeMemberDto_t>>();
    v.partyId = j.at("partyId").get<std::string_t>();
  }
  inline std::string to_string(const LolLobbyPremadePartyDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
