#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsChampionSkinDTO.hpp"
namespace leagueapi {
  struct CollectionsLcdsChampionDTO_t {
    int32_t championId;
    uint64_t endDate;
    bool rankedPlayEnabled;
    bool freeToPlay;
    int32_t winCountRemaining;
    std::vector<std::string> sources;
    uint64_t purchaseDate;
    uint64_t purchased;
    bool owned;
    std::vector<CollectionsLcdsChampionSkinDTO_t> championSkins;
    bool active;
    bool botEnabled;
    bool freeToPlayReward;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsChampionDTO_t& v) {
    j["championId"] = v.championId;
    j["endDate"] = v.endDate;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["freeToPlay"] = v.freeToPlay;
    j["winCountRemaining"] = v.winCountRemaining;
    j["sources"] = v.sources;
    j["purchaseDate"] = v.purchaseDate;
    j["purchased"] = v.purchased;
    j["owned"] = v.owned;
    j["championSkins"] = v.championSkins;
    j["active"] = v.active;
    j["botEnabled"] = v.botEnabled;
    j["freeToPlayReward"] = v.freeToPlayReward;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsChampionDTO_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.endDate = j.at("endDate").get<uint64_t>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>();
    v.sources = j.at("sources").get<std::vector<std::string>>();
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
    v.purchased = j.at("purchased").get<uint64_t>();
    v.owned = j.at("owned").get<bool>();
    v.championSkins = j.at("championSkins").get<std::vector<CollectionsLcdsChampionSkinDTO_t>>();
    v.active = j.at("active").get<bool>();
    v.botEnabled = j.at("botEnabled").get<bool>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
  }
}
