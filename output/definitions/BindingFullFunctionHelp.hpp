#ifndef SWAGGER_TYPES_BindingFullFunctionHelp_HPP
#define SWAGGER_TYPES_BindingFullFunctionHelp_HPP
#include <json.hpp>
#include "BindingFullArgumentHelp.hpp"
#include "BindingFullTypeIdentifier.hpp"
namespace test {
  // Describes a function.
  struct BindingFullFunctionHelp {
'    // 
    std::vector<BindingFullArgumentHelp> arguments;
    // 
    std::string async;
    // 
    std::string description;
    // 
    std::string help;
    // 
    std::string name;
    // 
    std::string nameSpace;
    // 
    BindingFullTypeIdentifier returns;
    // 
    std::vector<std::string> tags;
    // 
    bool threadSafe;
  };

  void to_json(nlohmann::json& j, const BindingFullFunctionHelp& v) {
    j["arguments"] = v.arguments;
    j["async"] = v.async;
    j["description"] = v.description;
    j["help"] = v.help;
    j["name"] = v.name;
    j["nameSpace"] = v.nameSpace;
    j["returns"] = v.returns;
    j["tags"] = v.tags;
    j["threadSafe"] = v.threadSafe;
  }

  void from_json(const nlohmann::json& j, BindingFullFunctionHelp& v) {
    v.arguments = j.at("arguments").get<std::vector<BindingFullArgumentHelp>>;
    v.async = j.at("async").get<std::string>;
    v.description = j.at("description").get<std::string>;
    v.help = j.at("help").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.nameSpace = j.at("nameSpace").get<std::string>;
    v.returns = j.at("returns").get<BindingFullTypeIdentifier>;
    v.tags = j.at("tags").get<std::vector<std::string>>;
    v.threadSafe = j.at("threadSafe").get<bool>;
  }

}
#endif // SWAGGER_TYPES_BindingFullFunctionHelp_HPP
