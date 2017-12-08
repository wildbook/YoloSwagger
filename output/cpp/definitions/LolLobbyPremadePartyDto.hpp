#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPremadeMemberDto.hpp"
namespace leagueapi {
  struct LolLobbyPremadePartyDto_t {
    std::string partyId;
    std::vector<LolLobbyPremadeMemberDto_t> players;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPremadePartyDto_t& v) {
    j["partyId"] = v.partyId;
    j["players"] = v.players;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPremadePartyDto_t& v) {
    v.partyId = j.at("partyId").get<std::string>();
    v.players = j.at("players").get<std::vector<LolLobbyPremadeMemberDto_t>>();
  }
  inline std::string to_string(const LolLobbyPremadePartyDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
