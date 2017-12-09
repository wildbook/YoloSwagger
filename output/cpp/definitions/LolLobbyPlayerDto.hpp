#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyMemberDto.hpp"
#include "LolLobbyPartyDto.hpp"
namespace leagueapi {
  struct LolLobbyPlayerDto_t {
    std::string puuid;
    std::optional<LolLobbyPartyDto_t> currentParty;
    int64_t eligibilityHash;
    uint64_t summonerId;
    std::optional<std::string> summonerToken;
    std::optional<std::string> leaguesToken;
    uint64_t createdAt;
    std::optional<std::vector<LolLobbyPartyMemberDto_t>> parties;
    std::string platformId;
    uint64_t accountId;
    uint64_t version;
    std::optional<std::string> inventoryToken;
    std::optional<std::string> accountToken;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPlayerDto_t& v) {
    j["puuid"] = v.puuid;
    if(v.currentParty)
      j["currentParty"] = *v.currentParty;
    j["eligibilityHash"] = v.eligibilityHash;
    j["summonerId"] = v.summonerId;
    if(v.summonerToken)
      j["summonerToken"] = *v.summonerToken;
    if(v.leaguesToken)
      j["leaguesToken"] = *v.leaguesToken;
    j["createdAt"] = v.createdAt;
    if(v.parties)
      j["parties"] = *v.parties;
    j["platformId"] = v.platformId;
    j["accountId"] = v.accountId;
    j["version"] = v.version;
    if(v.inventoryToken)
      j["inventoryToken"] = *v.inventoryToken;
    if(v.accountToken)
      j["accountToken"] = *v.accountToken;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPlayerDto_t& v) {
    v.puuid = j.at("puuid").get<std::string>();
    if(auto it = j.find("currentParty"); it != j.end() && !it->is_null())
      v.currentParty = it->get<LolLobbyPartyDto_t>();
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    if(auto it = j.find("summonerToken"); it != j.end() && !it->is_null())
      v.summonerToken = it->get<std::string>();
    if(auto it = j.find("leaguesToken"); it != j.end() && !it->is_null())
      v.leaguesToken = it->get<std::string>();
    v.createdAt = j.at("createdAt").get<uint64_t>();
    if(auto it = j.find("parties"); it != j.end() && !it->is_null())
      v.parties = it->get<std::vector<LolLobbyPartyMemberDto_t>>();
    v.platformId = j.at("platformId").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.version = j.at("version").get<uint64_t>();
    if(auto it = j.find("inventoryToken"); it != j.end() && !it->is_null())
      v.inventoryToken = it->get<std::string>();
    if(auto it = j.find("accountToken"); it != j.end() && !it->is_null())
      v.accountToken = it->get<std::string>();
  }
  inline std::string to_string(const LolLobbyPlayerDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
