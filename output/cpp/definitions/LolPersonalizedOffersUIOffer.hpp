#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersUIOffer_t {
    bool revealed;
    std::string skinName;
    bool owned;
    std::string type;
    std::string id;
    int64_t discountPrice;
    int64_t originalPrice;
    int32_t skinId;
    std::string expirationDate;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersUIOffer_t& v) {
    j["revealed"] = v.revealed;
    j["skinName"] = v.skinName;
    j["owned"] = v.owned;
    j["type"] = v.type;
    j["id"] = v.id;
    j["discountPrice"] = v.discountPrice;
    j["originalPrice"] = v.originalPrice;
    j["skinId"] = v.skinId;
    j["expirationDate"] = v.expirationDate;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersUIOffer_t& v) {
    v.revealed = j.at("revealed").get<bool>();
    v.skinName = j.at("skinName").get<std::string>();
    v.owned = j.at("owned").get<bool>();
    v.type = j.at("type").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.discountPrice = j.at("discountPrice").get<int64_t>();
    v.originalPrice = j.at("originalPrice").get<int64_t>();
    v.skinId = j.at("skinId").get<int32_t>();
    v.expirationDate = j.at("expirationDate").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolPersonalizedOffersUIOffer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
