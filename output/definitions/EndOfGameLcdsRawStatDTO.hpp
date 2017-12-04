#ifndef SWAGGER_TYPES_EndOfGameLcdsRawStatDTO_HPP
#define SWAGGER_TYPES_EndOfGameLcdsRawStatDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct EndOfGameLcdsRawStatDTO {
    // 
    std::string statTypeName;
    // 
    int64_t value;
  };

  void to_json(nlohmann::json& j, const EndOfGameLcdsRawStatDTO& v) {
    j["statTypeName"] = v.statTypeName;
    j["value"] = v.value;
  }

  void from_json(const nlohmann::json& j, EndOfGameLcdsRawStatDTO& v) {
    v.statTypeName = j.at("statTypeName").get<std::string>;
    v.value = j.at("value").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_EndOfGameLcdsRawStatDTO_HPP
