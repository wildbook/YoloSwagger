#pragma once
#include <json.hpp>
#include <optional>
#include "StoreLcdsChampionSkinDTO.hpp"
namespace leagueapi {
  struct StoreLcdsChampionDTO_t {
    uint64_t endDate;
    uint64_t purchaseDate;
    bool freeToPlayReward;
    uint32_t winCountRemaining;
    bool active;
    std::vector<StoreLcdsChampionSkinDTO_t> championSkins;
    bool freeToPlay;
    bool rankedPlayEnabled;
    bool owned;
    bool botEnabled;
    std::vector<std::string> sources;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const StoreLcdsChampionDTO_t& v) {
    j["endDate"] = v.endDate;
    j["purchaseDate"] = v.purchaseDate;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["winCountRemaining"] = v.winCountRemaining;
    j["active"] = v.active;
    j["championSkins"] = v.championSkins;
    j["freeToPlay"] = v.freeToPlay;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["owned"] = v.owned;
    j["botEnabled"] = v.botEnabled;
    j["sources"] = v.sources;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, StoreLcdsChampionDTO_t& v) {
    v.endDate = j.at("endDate").get<uint64_t>();
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.winCountRemaining = j.at("winCountRemaining").get<uint32_t>();
    v.active = j.at("active").get<bool>();
    v.championSkins = j.at("championSkins").get<std::vector<StoreLcdsChampionSkinDTO_t>>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
    v.owned = j.at("owned").get<bool>();
    v.botEnabled = j.at("botEnabled").get<bool>();
    v.sources = j.at("sources").get<std::vector<std::string>>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const StoreLcdsChampionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
