#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersUIOffer_t {
    std::string id;
    int64_t originalPrice;
    std::string skinName;
    bool revealed;
    int64_t discountPrice;
    int32_t championId;
    std::string type;
    bool owned;
    int32_t skinId;
    std::string expirationDate;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersUIOffer_t& v) {
    j["id"] = v.id;
    j["originalPrice"] = v.originalPrice;
    j["skinName"] = v.skinName;
    j["revealed"] = v.revealed;
    j["discountPrice"] = v.discountPrice;
    j["championId"] = v.championId;
    j["type"] = v.type;
    j["owned"] = v.owned;
    j["skinId"] = v.skinId;
    j["expirationDate"] = v.expirationDate;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersUIOffer_t& v) {
    v.id = j.at("id").get<std::string>();
    v.originalPrice = j.at("originalPrice").get<int64_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.revealed = j.at("revealed").get<bool>();
    v.discountPrice = j.at("discountPrice").get<int64_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.type = j.at("type").get<std::string>();
    v.owned = j.at("owned").get<bool>();
    v.skinId = j.at("skinId").get<int32_t>();
    v.expirationDate = j.at("expirationDate").get<std::string>();
  }
  inline std::string to_string(const LolPersonalizedOffersUIOffer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
