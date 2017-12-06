#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyMemberDto.hpp"
#include "LolLobbyPartyDto.hpp"
namespace leagueapi {
  struct LolLobbyPlayerDto_t {
    uint64_t accountId;
    std::optional<std::string> accountToken;
    uint64_t createdAt;
    std::optional<LolLobbyPartyDto_t> currentParty;
    int64_t eligibilityHash;
    std::optional<std::string> inventoryToken;
    std::optional<std::string> leaguesToken;
    std::optional<std::vector<LolLobbyPartyMemberDto_t>> parties;
    std::string platformId;
    std::string puuid;
    uint64_t summonerId;
    std::optional<std::string> summonerToken;
    uint64_t version;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPlayerDto_t& v) {
    j["accountId"] = v.accountId;
    if(v.accountToken)
      j["accountToken"] = *v.accountToken;
    j["createdAt"] = v.createdAt;
    if(v.currentParty)
      j["currentParty"] = *v.currentParty;
    j["eligibilityHash"] = v.eligibilityHash;
    if(v.inventoryToken)
      j["inventoryToken"] = *v.inventoryToken;
    if(v.leaguesToken)
      j["leaguesToken"] = *v.leaguesToken;
    if(v.parties)
      j["parties"] = *v.parties;
    j["platformId"] = v.platformId;
    j["puuid"] = v.puuid;
    j["summonerId"] = v.summonerId;
    if(v.summonerToken)
      j["summonerToken"] = *v.summonerToken;
    j["version"] = v.version;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPlayerDto_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    if(auto it = j.find("accountToken"); it != j.end() !it->is_null())
      v.accountToken = it->get<std::string>();
    v.createdAt = j.at("createdAt").get<uint64_t>();
    if(auto it = j.find("currentParty"); it != j.end() !it->is_null())
      v.currentParty = it->get<LolLobbyPartyDto_t>();
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>();
    if(auto it = j.find("inventoryToken"); it != j.end() !it->is_null())
      v.inventoryToken = it->get<std::string>();
    if(auto it = j.find("leaguesToken"); it != j.end() !it->is_null())
      v.leaguesToken = it->get<std::string>();
    if(auto it = j.find("parties"); it != j.end() !it->is_null())
      v.parties = it->get<std::vector<LolLobbyPartyMemberDto_t>>();
    v.platformId = j.at("platformId").get<std::string>();
    v.puuid = j.at("puuid").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    if(auto it = j.find("summonerToken"); it != j.end() !it->is_null())
      v.summonerToken = it->get<std::string>();
    v.version = j.at("version").get<uint64_t>();
  }
}
