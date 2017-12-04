#ifndef SWAGGER_TYPES_LolCollectionsCollectionsRuneQuantity_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsRuneQuantity_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsRuneQuantity {
    // 
    int32_t quantity;
    // 
    uint32_t runeId;
  };

  void to_json(nlohmann::json& j, const LolCollectionsCollectionsRuneQuantity& v) {
    j["quantity"] = v.quantity;
    j["runeId"] = v.runeId;
  }

  void from_json(const nlohmann::json& j, LolCollectionsCollectionsRuneQuantity& v) {
    v.quantity = j.at("quantity").get<int32_t>;
    v.runeId = j.at("runeId").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsRuneQuantity_HPP
