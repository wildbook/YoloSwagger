#ifndef SWAGGER_TYPES_StoreLcdsChampionDTO_HPP
#define SWAGGER_TYPES_StoreLcdsChampionDTO_HPP
#include <json.hpp>
#include "StoreLcdsChampionSkinDTO.hpp"
namespace leagueapi {
  // 
  struct StoreLcdsChampionDTO {
    // 
    bool active;
    // 
    bool botEnabled;
    // 
    int32_t championId;
    // 
    std::vector<StoreLcdsChampionSkinDTO> championSkins;
    // 
    uint64_t endDate;
    // 
    bool freeToPlay;
    // 
    bool freeToPlayReward;
    // 
    bool owned;
    // 
    uint64_t purchaseDate;
    // 
    bool rankedPlayEnabled;
    // 
    std::vector<std::string> sources;
    // 
    uint32_t winCountRemaining;
  };

  void to_json(nlohmann::json& j, const StoreLcdsChampionDTO& v) {
    j["active"] = v.active;
    j["botEnabled"] = v.botEnabled;
    j["championId"] = v.championId;
    j["championSkins"] = v.championSkins;
    j["endDate"] = v.endDate;
    j["freeToPlay"] = v.freeToPlay;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
    j["purchaseDate"] = v.purchaseDate;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["sources"] = v.sources;
    j["winCountRemaining"] = v.winCountRemaining;
  }

  void from_json(const nlohmann::json& j, StoreLcdsChampionDTO& v) {
    v.active = j.at("active").get<bool>;
    v.botEnabled = j.at("botEnabled").get<bool>;
    v.championId = j.at("championId").get<int32_t>;
    v.championSkins = j.at("championSkins").get<std::vector<StoreLcdsChampionSkinDTO>>;
    v.endDate = j.at("endDate").get<uint64_t>;
    v.freeToPlay = j.at("freeToPlay").get<bool>;
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>;
    v.owned = j.at("owned").get<bool>;
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>;
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>;
    v.sources = j.at("sources").get<std::vector<std::string>>;
    v.winCountRemaining = j.at("winCountRemaining").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_StoreLcdsChampionDTO_HPP