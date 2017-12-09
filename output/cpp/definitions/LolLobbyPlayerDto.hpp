#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPartyDto.hpp"
#include "LolLobbyPartyMemberDto.hpp"
namespace leagueapi {
  struct LolLobbyPlayerDto_t {
    int64_t eligibilityHash;
    std::optional<std::string> leaguesToken;
    std::optional<std::string> inventoryToken;
    std::optional<LolLobbyPartyDto_t> currentParty;
    uint64_t summonerId;
    std::optional<std::vector<LolLobbyPartyMemberDto_t>> parties;
    uint64_t accountId;
    std::string platformId;
    std::optional<std::string> summonerToken;
    uint64_t version;
    uint64_t createdAt;
    std::optional<std::string> accountToken;
    std::string puuid;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPlayerDto_t& v) {
    j["eligibilityHash"] = v.eligibilityHash;
    if(v.leaguesToken)
      j["leaguesToken"] = *v.leaguesToken;
    if(v.inventoryToken)
      j["inventoryToken"] = *v.inventoryToken;
    if(v.currentParty)
      j["currentParty"] = *v.currentParty;
    j["summonerId"] = v.summonerId;
    if(v.parties)
      j["parties"] = *v.parties;
    j["accountId"] = v.accountId;
    j["platformId"] = v.platformId;
    if(v.summonerToken)
      j["summonerToken"] = *v.summonerToken;
    j["version"] = v.version;
    j["createdAt"] = v.createdAt;
    if(v.accountToken)
      j["accountToken"] = *v.accountToken;
    j["puuid"] = v.puuid;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPlayerDto_t& v) {
    v.eligibilityHash = j.at("eligibilityHash").get<int64_t>();
    if(auto it = j.find("leaguesToken"); it != j.end() && !it->is_null())
      v.leaguesToken = it->get<std::string>();
    if(auto it = j.find("inventoryToken"); it != j.end() && !it->is_null())
      v.inventoryToken = it->get<std::string>();
    if(auto it = j.find("currentParty"); it != j.end() && !it->is_null())
      v.currentParty = it->get<LolLobbyPartyDto_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    if(auto it = j.find("parties"); it != j.end() && !it->is_null())
      v.parties = it->get<std::vector<LolLobbyPartyMemberDto_t>>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.platformId = j.at("platformId").get<std::string>();
    if(auto it = j.find("summonerToken"); it != j.end() && !it->is_null())
      v.summonerToken = it->get<std::string>();
    v.version = j.at("version").get<uint64_t>();
    v.createdAt = j.at("createdAt").get<uint64_t>();
    if(auto it = j.find("accountToken"); it != j.end() && !it->is_null())
      v.accountToken = it->get<std::string>();
    v.puuid = j.at("puuid").get<std::string>();
  }
  inline std::string to_string(const LolLobbyPlayerDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
