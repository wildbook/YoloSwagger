#ifndef SWAGGER_TYPES_LolAcsAcsEndPoint_HPP
#define SWAGGER_TYPES_LolAcsAcsEndPoint_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolAcsAcsEndPoint {
'    // 
    std::string url;
  };

  void to_json(nlohmann::json& j, const LolAcsAcsEndPoint& v) {
    j["url"] = v.url;
  }

  void from_json(const nlohmann::json& j, LolAcsAcsEndPoint& v) {
    v.url = j.at("url").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolAcsAcsEndPoint_HPP
