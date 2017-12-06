#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyDto.hpp"
#include "LolLobbyPartyMemberDto.hpp"
namespace leagueapi {
  struct LolLobbyPlayerDto_t {
    std::optional<std::string> inventoryToken;
    std::optional<std::string> leaguesToken;
    std::optional<std::vector<LolLobbyPartyMemberDto_t>> parties;
    std::string puuid;
    uint64_t accountId;
    std::optional<LolLobbyPartyDto_t> currentParty;
    std::string platformId;
    std::optional<std::string> accountToken;
    uint64_t version;
    int64_t eligibilityHash;
    uint64_t createdAt;
    uint64_t summonerId;
    std::optional<std::string> summonerToken;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPlayerDto_t& v) {
    if(v.inventoryToken)
      j["inventoryToken"] = *v.inventoryToken;
    if(v.leaguesToken)
      j["leaguesToken"] = *v.leaguesToken;
    if(v.parties)
      j["parties"] = *v.parties;
    j["puuid"] = v.puuid;
    j["accountId"] = v.accountId;
    if(v.currentParty)
      j["currentParty"] = *v.currentParty;
    j["platformId"] = v.platformId;
    if(v.accountToken)
      j["accountToken"] = *v.accountToken;
    j["version"] = v.version;
    j["eligibilityHash"] = v.eligibilityHash;
    j["createdAt"] = v.createdAt;
    j["summonerId"] = v.summonerId;
    if(v.summonerToken)
      j["summonerToken"] = *v.summonerToken;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPlayerDto_t& v) {
    if(auto it = j.find("inventoryToken"); it != j.end() !it->is_null())
      v.inventoryToken = it->get<std::string>();
    if(auto it = j.find("leaguesToken"); it != j.end() !it->is_null())
      v.leaguesToken = it->get<std::string>();
    if(auto it = j.find("parties"); it != j.end() !it->is_null())
      v.parties = it->get<std::vector<LolLobbyPartyMemberDto_t>>();
    v.puuid = j.at("puuid").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    if(auto it = j.find("currentParty"); it != j.end() !it->is_null())
      v.currentParty = it->get<LolLobbyPartyDto_t>();
    v.platformId = j.at("platformId").get<std::string>();
    if(auto it = j.find("accountToken"); it != j.end() !it->is_null())
      v.accountToken = it->get<std::string>();
    v.version = j.at("version").get<uint64_t>();
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>();
    v.createdAt = j.at("createdAt").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    if(auto it = j.find("summonerToken"); it != j.end() !it->is_null())
      v.summonerToken = it->get<std::string>();
  }
}
