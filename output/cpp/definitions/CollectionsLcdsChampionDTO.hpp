#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsChampionSkinDTO.hpp"
namespace leagueapi {
  struct CollectionsLcdsChampionDTO_t {
    uint64_t endDate;
    uint64_t purchaseDate;
    bool freeToPlayReward;
    int32_t winCountRemaining;
    bool active;
    std::vector<CollectionsLcdsChampionSkinDTO_t> championSkins;
    bool freeToPlay;
    bool rankedPlayEnabled;
    bool owned;
    uint64_t purchased;
    bool botEnabled;
    std::vector<std::string> sources;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsChampionDTO_t& v) {
    j["endDate"] = v.endDate;
    j["purchaseDate"] = v.purchaseDate;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["winCountRemaining"] = v.winCountRemaining;
    j["active"] = v.active;
    j["championSkins"] = v.championSkins;
    j["freeToPlay"] = v.freeToPlay;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["owned"] = v.owned;
    j["purchased"] = v.purchased;
    j["botEnabled"] = v.botEnabled;
    j["sources"] = v.sources;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsChampionDTO_t& v) {
    v.endDate = j.at("endDate").get<uint64_t>();
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>();
    v.active = j.at("active").get<bool>();
    v.championSkins = j.at("championSkins").get<std::vector<CollectionsLcdsChampionSkinDTO_t>>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
    v.owned = j.at("owned").get<bool>();
    v.purchased = j.at("purchased").get<uint64_t>();
    v.botEnabled = j.at("botEnabled").get<bool>();
    v.sources = j.at("sources").get<std::vector<std::string>>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const CollectionsLcdsChampionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
