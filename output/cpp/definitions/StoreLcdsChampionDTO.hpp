#pragma once
#include <json.hpp>
#include <optional>
#include "StoreLcdsChampionSkinDTO.hpp"
namespace leagueapi {
  struct StoreLcdsChampionDTO_t {
    std::vector<StoreLcdsChampionSkinDTO_t> championSkins;
    bool rankedPlayEnabled;
    int32_t championId;
    bool botEnabled;
    uint64_t purchaseDate;
    uint64_t endDate;
    std::vector<std::string> sources;
    bool freeToPlayReward;
    bool owned;
    bool active;
    bool freeToPlay;
    uint32_t winCountRemaining;
  };

  inline void to_json(nlohmann::json& j, const StoreLcdsChampionDTO_t& v) {
    j["championSkins"] = v.championSkins;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["championId"] = v.championId;
    j["botEnabled"] = v.botEnabled;
    j["purchaseDate"] = v.purchaseDate;
    j["endDate"] = v.endDate;
    j["sources"] = v.sources;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
    j["active"] = v.active;
    j["freeToPlay"] = v.freeToPlay;
    j["winCountRemaining"] = v.winCountRemaining;
  }

  inline void from_json(const nlohmann::json& j, StoreLcdsChampionDTO_t& v) {
    v.championSkins = j.at("championSkins").get<std::vector<StoreLcdsChampionSkinDTO_t>>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
    v.botEnabled = j.at("botEnabled").get<bool>();
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
    v.endDate = j.at("endDate").get<uint64_t>();
    v.sources = j.at("sources").get<std::vector<std::string>>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.owned = j.at("owned").get<bool>();
    v.active = j.at("active").get<bool>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.winCountRemaining = j.at("winCountRemaining").get<uint32_t>();
  }
  inline std::string to_string(const StoreLcdsChampionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
