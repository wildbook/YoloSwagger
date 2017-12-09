#pragma once
#include <json.hpp>
#include <optional>
#include "StoreLcdsChampionSkinDTO.hpp"
namespace leagueapi {
  struct StoreLcdsChampionDTO_t {
    std::vector<StoreLcdsChampionSkinDTO_t> championSkins;
    uint32_t winCountRemaining;
    bool freeToPlayReward;
    bool owned;
    bool botEnabled;
    uint64_t purchaseDate;
    uint64_t endDate;
    std::vector<std::string> sources;
    bool freeToPlay;
    int32_t championId;
    bool rankedPlayEnabled;
    bool active;
  };

  inline void to_json(nlohmann::json& j, const StoreLcdsChampionDTO_t& v) {
    j["championSkins"] = v.championSkins;
    j["winCountRemaining"] = v.winCountRemaining;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
    j["botEnabled"] = v.botEnabled;
    j["purchaseDate"] = v.purchaseDate;
    j["endDate"] = v.endDate;
    j["sources"] = v.sources;
    j["freeToPlay"] = v.freeToPlay;
    j["championId"] = v.championId;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["active"] = v.active;
  }

  inline void from_json(const nlohmann::json& j, StoreLcdsChampionDTO_t& v) {
    v.championSkins = j.at("championSkins").get<std::vector<StoreLcdsChampionSkinDTO_t>>();
    v.winCountRemaining = j.at("winCountRemaining").get<uint32_t>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.owned = j.at("owned").get<bool>();
    v.botEnabled = j.at("botEnabled").get<bool>();
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
    v.endDate = j.at("endDate").get<uint64_t>();
    v.sources = j.at("sources").get<std::vector<std::string>>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
    v.active = j.at("active").get<bool>();
  }
  inline std::string to_string(const StoreLcdsChampionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
