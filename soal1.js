function getBiodata() {
  return JSON.stringify({
    name: "Fadhil",
    address: "Jl. Baladewa VI no. 37",
    hobbies: ["Reading", "Playing Games", "Watching Moives"],
    is_married: false,
    school: {
      highschool: "SMAN 2 Depok",
      university: ""
    },
    skills: [
      {
        name: "C++"
      },
      {
        name: "Java"
      }
    ]
  });
}
